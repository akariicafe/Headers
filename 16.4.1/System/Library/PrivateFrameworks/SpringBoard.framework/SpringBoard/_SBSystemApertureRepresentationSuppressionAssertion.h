@class NSString;

@interface _SBSystemApertureRepresentationSuppressionAssertion : NSObject <BSInvalidatable> {
    id /* block */ _invalidationBlock;
    BOOL _coverSheetVisible;
    BOOL _suppressForSystemChromeSuppression;
}

@property (readonly, nonatomic, getter=isCoverSheetVisible) BOOL coverSheetVisible;
@property (readonly, nonatomic) BOOL suppressForSystemChromeSuppression;
@property (nonatomic, getter=_isValid, setter=_setValid:) BOOL _valid;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)invalidate;
- (void).cxx_destruct;
- (id)initWithCoverSheetVisible:(BOOL)a0 suppressForSystemChromeSuppression:(BOOL)a1 invalidationBlock:(id /* block */)a2;

@end
