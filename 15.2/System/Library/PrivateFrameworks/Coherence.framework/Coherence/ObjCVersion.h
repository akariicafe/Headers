@class NSArray, NSString;

@interface ObjCVersion : NSObject {
    void /* unknown type, empty encoding */ version;
}

@property (nonatomic, readonly) BOOL isEmpty;
@property (nonatomic, readonly) long long maxCounter;
@property (nonatomic, readonly) BOOL hasTemporaryComponents;
@property (nonatomic, readonly) NSArray *sortedUUIDs;
@property (nonatomic, readonly) NSString *description;

- (void)merge:(id)a0;
- (void)apply:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (BOOL)contains:(id)a0;
- (void)subtract:(id)a0;
- (id)copy;
- (void)insertWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 replica:(id)a1;
- (id)temporaryComponentsWithExcluding:(id)a0;
- (BOOL)hasDeltaTo:(id)a0;
- (void)subtractWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 replica:(id)a1;

@end
