@class NSString, NSDate;

@interface CXChannelLeaveAction : CXChannelAction <CXCopying>

@property (copy, nonatomic) NSDate *leaveDate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)customDescription;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)fulfill;
- (void)fulfillWithLeaveDate:(id)a0;
- (void)updateSanitizedCopy:(id)a0 withZone:(struct _NSZone { } *)a1;

@end
