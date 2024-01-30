@class NSNumber, NSArray, NSString;

@interface DOCEnumerationProperties : NSObject

@property (copy) NSNumber *maximumNumberOfItems;
@property (copy) NSArray *tagIdentifiers;
@property (copy) NSArray *excludedFileTypes;
@property (copy) NSArray *allowedFileTypes;
@property (copy) NSString *hostIdentifier;

- (void).cxx_destruct;
- (id)initWithHostIdentifier:(id)a0 maximumNumberOfItems:(long long)a1 allowedDocumentTypes:(id)a2 excludedDocumentTypes:(id)a3 tags:(id)a4;
- (id)initWithConfiguration:(id)a0 tags:(id)a1;

@end
