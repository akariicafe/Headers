@class BLSAlwaysOnTimelineEntry;

@interface BLSAlwaysOnTimelineEntrySpecifier : NSObject <NSCopying> {
    long long _requestedFidelity;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property BOOL didChange;
@property long long grantedFidelity;
@property long long requestedFidelity;
@property (readonly) BLSAlwaysOnTimelineEntry *timelineEntry;
@property (readonly) double percentComplete;
@property (readonly) BLSAlwaysOnTimelineEntry *previousTimelineEntry;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)debugDescription;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (long long)compare:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithTimelineEntry:(id)a0 percentComplete:(double)a1 previousTimelineEntry:(id)a2 didChange:(BOOL)a3;

@end
