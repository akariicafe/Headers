@class _CLRangingPeer, NSNumber, NSDate;

@interface _CLRangingPeerDistanceInternal : NSObject <NSCopying> {
    _CLRangingPeer *_peer;
    NSDate *_date;
    NSNumber *_distanceMeters;
    NSNumber *_accuracyMeters;
    BOOL _initiator;
    BOOL _shouldUnlock;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)initWithPeer:(id)a0 date:(id)a1 distanceMeters:(id)a2 accuracyMeters:(id)a3 initiator:(BOOL)a4 shouldUnlock:(BOOL)a5;

@end
