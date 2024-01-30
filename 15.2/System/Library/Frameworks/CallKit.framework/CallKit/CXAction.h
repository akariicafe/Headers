@class NSUUID, NSMutableString, NSString, NSDate;
@protocol CXActionDelegate;

@interface CXAction : NSObject <CXCopying, NSCopying, NSSecureCoding>

@property (class, readonly, nonatomic) double timeout;
@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSUUID *UUID;
@property (nonatomic) long long state;
@property (nonatomic) long long failureReason;
@property (readonly, copy, nonatomic) NSMutableString *customDescription;
@property (retain, nonatomic) NSDate *commitDate;
@property (weak, nonatomic) id<CXActionDelegate> delegate;
@property (readonly, nonatomic, getter=isComplete) BOOL complete;
@property (readonly, nonatomic) NSDate *timeoutDate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)fail;
- (void)encodeWithCoder:(id)a0;
- (void)fulfill;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)sanitizedCopy;
- (id)sanitizedCopyWithZone:(struct _NSZone { } *)a0;
- (void)updateSanitizedCopy:(id)a0 withZone:(struct _NSZone { } *)a1;
- (void)updateAsFulfilled;
- (void)updateCopy:(id)a0 withZone:(struct _NSZone { } *)a1;
- (void)updateAsFailedWithReason:(long long)a0;

@end
