@class NSArray, NSString;

@interface Coherence.ObjCVersion : NSObject {
    void /* unknown type, empty encoding */ version;
}

@property (nonatomic, readonly) BOOL isEmpty;
@property (nonatomic, readonly) long long maxCounter;
@property (nonatomic, readonly) BOOL hasTemporaryComponents;
@property (nonatomic, readonly) NSArray *sortedUUIDs;
@property (nonatomic, readonly) NSString *description;

- (id)init;
- (void).cxx_destruct;
- (void)apply:(id)a0;
- (id)copy;
- (BOOL)isEqual:(id)a0;
- (BOOL)contains:(id)a0;
- (void)insertWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 replica:(id)a1;
- (void)shallowMerge:(id)a0;
- (id)temporaryComponentsWithExcluding:(id)a0;
- (void)subtract:(id)a0;
- (BOOL)hasDeltaTo:(id)a0;
- (void)subtractWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 replica:(id)a1;

@end
