@class NSString;

@interface MTFinalValidationFilter : MTObject <MTEventFilter>

@property (nonatomic) BOOL shouldApplyDeRes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)apply:(id)a0;
- (void)validateFields:(id)a0;

@end
