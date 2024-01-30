@class VUIDocumentPreFetchedData, NSString, VUIDocumentContextData, VUIDocumentUIConfiguration;

@interface VUIDocumentDataSource : NSObject

@property (retain, nonatomic) NSString *documentRef;
@property (retain, nonatomic) NSString *documentType;
@property (retain, nonatomic) NSString *controllerRef;
@property (retain, nonatomic) VUIDocumentContextData *contextData;
@property (retain, nonatomic) VUIDocumentPreFetchedData *prefetchData;
@property (retain, nonatomic) VUIDocumentUIConfiguration *uiConfiguration;
@property (nonatomic) BOOL shouldLoadPageImmediately;

+ (id)documentDataSourceWithDictionary:(id)a0;
+ (BOOL)isCanonicalDocumentRef:(id)a0;

- (void).cxx_destruct;
- (id)jsonData;
- (id)initWithDocumentRef:(id)a0;
- (id)initWithDataSourceDict:(id)a0;

@end
