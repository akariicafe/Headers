@class NSString, _BSCompoundAssertionAcquisitionRecord;

@interface _BSCompoundAssertionAcquisitionReference : NSObject <BSInvalidatable> {
    struct atomic_flag { _Atomic BOOL _Value; } _invalid;
    _BSCompoundAssertionAcquisitionRecord *_record;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
