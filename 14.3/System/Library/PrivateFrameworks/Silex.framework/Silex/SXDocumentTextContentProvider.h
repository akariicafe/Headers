@class SXDocument, NSString;

@interface SXDocumentTextContentProvider : NSObject <SXTextContentProvider>

@property (readonly, nonatomic) SXDocument *document;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedQueue;

- (void).cxx_destruct;
- (id)initWithDocument:(id)a0;
- (id)textContentForComponents:(id)a0 withType:(unsigned long long)a1;
- (id)textContentForComponent:(id)a0 withType:(unsigned long long)a1;
- (BOOL)classification:(id)a0 isValidForType:(unsigned long long)a1;
- (BOOL)contentRelevance:(unsigned long long)a0 isValidForType:(unsigned long long)a1;
- (void)textContentForType:(unsigned long long)a0 onCompletion:(id /* block */)a1;

@end
