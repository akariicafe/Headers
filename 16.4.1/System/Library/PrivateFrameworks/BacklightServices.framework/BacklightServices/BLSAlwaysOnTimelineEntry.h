@class NSDate;
@protocol NSCopying, NSObject;

@interface BLSAlwaysOnTimelineEntry : NSObject <NSCopying, NSMutableCopying>

@property (nonatomic) long long requestedFidelity;
@property (nonatomic, getter=isAnimated) BOOL animated;
@property (nonatomic) double duration;
@property (retain, nonatomic) id<NSObject> userObject;
@property (retain, nonatomic) id<NSObject, NSCopying> timelineIdentifier;
@property (readonly, nonatomic) NSDate *presentationTime;

+ (id)loggingStringForPresentationTime:(id)a0;
+ (id)shortLoggingStringForPresentationTime:(id)a0;

- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)debugDescription;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (long long)compare:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithPresentationTime:(id)a0 requestedFidelity:(long long)a1 animated:(BOOL)a2 duration:(double)a3 timelineIdentifier:(id)a4 userObject:(id)a5;

@end
