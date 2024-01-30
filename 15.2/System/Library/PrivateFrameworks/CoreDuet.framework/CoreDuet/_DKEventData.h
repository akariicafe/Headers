@class NSData;

@interface _DKEventData : NSObject {
    unsigned long long _version;
    NSData *_event;
    unsigned long long _uncompressedLength;
}

+ (id)fromPBCodable:(id)a0;

- (id)toPBCodable;
- (void).cxx_destruct;

@end
