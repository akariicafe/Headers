@class SSSilentEnrollmentContext, NSString;

@interface SSSilentEnrollment : SSRequest <SSXPCCoding>

@property (retain) SSSilentEnrollmentContext *context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
