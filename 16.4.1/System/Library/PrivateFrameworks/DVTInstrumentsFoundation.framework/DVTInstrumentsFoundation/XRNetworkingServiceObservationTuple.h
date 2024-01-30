@interface XRNetworkingServiceObservationTuple : NSObject {
    id *data;
}

@property (nonatomic) int kind;
@property (nonatomic) unsigned char count;

- (void)dealloc;
- (id)initWithKind:(int)a0 count:(unsigned char)a1;
- (id)initWithKind:(int)a0 count:(unsigned char)a1 source:(struct __CFDictionary { } *)a2 indexToKeyMap:(const struct __CFString ***)a3;

@end
