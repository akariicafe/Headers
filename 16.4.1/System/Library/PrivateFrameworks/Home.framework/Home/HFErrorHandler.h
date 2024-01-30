@class NSString;

@interface HFErrorHandler : NSObject

@property (retain, nonatomic) NSString *presentingAlertOperationType;

+ (id)sharedHandler;
+ (id)descriptionLocalizationKeyForError:(id)a0;
+ (id)_descriptionForHFErrorCode:(long long)a0;
+ (id)_descriptionForHMErrorCode:(long long)a0;
+ (id)_descriptionForHMHomeAddWalletKeyErrorCode:(long long)a0;

- (void)handleError:(id)a0;
- (void).cxx_destruct;
- (void)handleError:(id)a0 operationType:(id)a1 options:(id)a2 retryBlock:(id /* block */)a3 cancelBlock:(id /* block */)a4;
- (void)handleError:(id)a0 retryBlock:(id /* block */)a1 cancelBlock:(id /* block */)a2;
- (void)logError:(id)a0 operationDescription:(id)a1;
- (BOOL)canIgnoreError:(id)a0;
- (BOOL)_isErrorIndicativeOfApplicationBug:(id)a0 operationType:(id)a1 options:(id)a2;
- (BOOL)_isErrorPermanent:(id)a0 operationType:(id)a1 options:(id)a2;
- (id)_localizedDescriptionForError:(id)a0 operationType:(id)a1 options:(id)a2;
- (id)_localizedStringOrNilIfNotFoundForKey:(id)a0;
- (id)_localizedTitleForError:(id)a0 operationType:(id)a1 options:(id)a2;

@end
