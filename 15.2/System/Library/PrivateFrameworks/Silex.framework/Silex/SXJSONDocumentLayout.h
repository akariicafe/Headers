@class NSString;

@interface SXJSONDocumentLayout : SXJSONObject <SXDocumentLayout>

@property (readonly, nonatomic) long long width;
@property (readonly, nonatomic) long long margin;
@property (readonly, nonatomic) long long gutter;
@property (readonly, nonatomic) unsigned long long columns;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)gutterWithValue:(id)a0 withType:(int)a1;

@end
