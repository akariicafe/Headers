@interface PFTaggedPointer : NSObject {
    union { unsigned long long unsignedPayload; long long signedPayload; } _payload;
}

+ (unsigned short)tag;
+ (BOOL)taggedPointersEnabled;
+ (id)newInstanceWithPayload:(unsigned long long)a0;
+ (id)newInstanceWithSignedPayload:(long long)a0;

- (unsigned long long)payload;
- (id)initWithPayload:(unsigned long long)a0;
- (unsigned long long)hash;
- (id)initWithSignedPayload:(long long)a0;
- (long long)signedPayload;
- (BOOL)isTaggedPointer;
- (BOOL)isEqual:(id)a0;

@end
