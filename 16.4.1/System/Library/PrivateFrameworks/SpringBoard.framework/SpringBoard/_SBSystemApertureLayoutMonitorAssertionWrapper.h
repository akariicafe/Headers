@class NSString, BSServiceConnection;
@protocol SAInvalidatable;

@interface _SBSystemApertureLayoutMonitorAssertionWrapper : BSSimpleAssertion

@property (retain, nonatomic) id<SAInvalidatable> wrappedAssertion;
@property (weak, nonatomic) BSServiceConnection *associatedConnection;
@property (copy, nonatomic) NSString *invalidationReason;

- (void).cxx_destruct;

@end
