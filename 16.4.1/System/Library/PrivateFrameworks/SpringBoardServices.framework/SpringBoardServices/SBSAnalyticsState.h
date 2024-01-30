@class NSString, NSDictionary;

@interface SBSAnalyticsState : NSObject <BSDescriptionProviding> {
    NSDictionary *_payload;
}

@property (readonly, nonatomic) double timestamp;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)withTimestamp:(double)a0 payload:(id)a1;
+ (id)withTimestamp:(double)a0;

- (id)coreAnalyticsRepresentation;
- (id)initWithTimestamp:(double)a0 payload:(id)a1;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)succinctDescriptionBuilder;
- (id)objectForKeyedSubscript:(id)a0;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void).cxx_destruct;

@end
