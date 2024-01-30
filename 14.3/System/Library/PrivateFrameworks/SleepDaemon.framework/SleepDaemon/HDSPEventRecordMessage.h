@class NSString, NSDate;

@interface HDSPEventRecordMessage : NSObject <BSDescriptionProviding, HDSPIDSMessage>

@property (readonly, nonatomic) NSDate *date;
@property (readonly, nonatomic) NSString *dateDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, nonatomic) double timeout;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)succinctDescriptionBuilder;
- (void)encodeWithCoder:(id)a0;
- (id)initWithDate:(id)a0 timeout:(double)a1;

@end
