@class NSMutableArray, NSString, NSDictionary, EDAMNote, NSArray, NSDate, ENNoteContent;

@interface ENNote : NSObject <WFNaming> {
    NSMutableArray *_resources;
}

@property (readonly, copy, nonatomic) NSString *wfName;
@property (copy, nonatomic) NSString *sourceUrl;
@property (copy, nonatomic) NSString *cachedENMLContent;
@property (retain, nonatomic) EDAMNote *serviceNote;
@property (retain, nonatomic) NSDictionary *edamAttributes;
@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) ENNoteContent *content;
@property (copy, nonatomic) NSArray *tagNames;
@property (nonatomic) BOOL isReminder;
@property (readonly, nonatomic) NSDate *modificationDate;
@property (readonly, nonatomic) NSDate *creationDate;
@property (readonly, nonatomic) NSArray *resources;

- (id)init;
- (void).cxx_destruct;
- (void)setResources:(id)a0;
- (void)addResource:(id)a0;
- (void)removeAllResources;
- (id)initWithServiceNote:(id)a0;
- (void)generateWebArchiveData:(id /* block */)a0;
- (void)generateHTMLData:(id /* block */)a0;
- (void)invalidateCachedENML;
- (id)enmlContent;
- (id)EDAMNote;
- (id)EDAMNoteToReplaceServiceNoteGUID:(id)a0;
- (BOOL)validateForLimits;
- (id)generateENMLContent;

@end
