@interface PLTaggedPointer : NSObject {
    union { unsigned long long unsignedPayload; long long signedPayload; } _payload;
}

+ (unsigned short)tag;
+ (id)newInstanceWithPayload:(unsigned long long)a0;
+ (id)newInstanceWithSignedPayload:(long long)a0;
+ (BOOL)taggedPointersEnabled;

- (unsigned long long)payload;
- (id)initWithPayload:(unsigned long long)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (BOOL)isTaggedPointer;
- (id)initWithSignedPayload:(long long)a0;
- (long long)signedPayload;

@end
