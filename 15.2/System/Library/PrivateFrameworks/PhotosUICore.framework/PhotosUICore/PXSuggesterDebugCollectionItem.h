@class NSString, NSDictionary, PHSuggestion, NSDate;

@interface PXSuggesterDebugCollectionItem : NSObject

@property (readonly) NSString *name;
@property (readonly) NSString *description;
@property (readonly) NSDictionary *info;
@property (readonly) PHSuggestion *suggestion;
@property (readonly) NSDate *date;
@property (readonly) BOOL isInvalid;

- (void).cxx_destruct;
- (id)initWithSuggestion:(id)a0 suggestionInfo:(id)a1;

@end
