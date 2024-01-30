@class VUIDocumentPreFetchedData, NSString, NSArray, VUIDocumentContextData, VUIDocumentUIConfiguration;

@interface VUIDocumentDataSource : NSObject

@property (retain, nonatomic) NSString *documentRef;
@property (retain, nonatomic) NSString *documentType;
@property (retain, nonatomic) NSString *controllerRef;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) VUIDocumentContextData *contextData;
@property (retain, nonatomic) VUIDocumentPreFetchedData *prefetchData;
@property (retain, nonatomic) VUIDocumentUIConfiguration *uiConfiguration;
@property (retain, nonatomic) NSArray *universalLinks;
@property (retain, nonatomic) NSString *marketingTabIdentifier;
@property (retain, nonatomic) NSString *identifier;
@property (nonatomic) BOOL shouldLoadPageImmediately;
@property (retain, nonatomic) NSArray *childDocumentDataSources;

+ (id)documentDataSourceWithDictionary:(id)a0;
+ (BOOL)isCanonicalDocumentRef:(id)a0;

- (id)jsonData;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDataSourceDict:(id)a0;
- (id)initWithDocumentRef:(id)a0;

@end
