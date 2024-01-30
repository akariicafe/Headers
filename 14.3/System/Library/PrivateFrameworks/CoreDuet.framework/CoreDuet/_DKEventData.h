@class NSData;

@interface _DKEventData : NSObject {
    unsigned long long _version;
    NSData *_event;
    unsigned long long _uncompressedLength;
}

+ (id)fromPBCodable:(id)a0;

- (void).cxx_destruct;
- (id)toPBCodable;

@end
