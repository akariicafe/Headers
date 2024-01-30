@class NSString;

@interface SXDocumentLayout : NSObject <SXDocumentLayout>

@property (readonly, nonatomic) long long width;
@property (readonly, nonatomic) long long margin;
@property (readonly, nonatomic) long long gutter;
@property (readonly, nonatomic) unsigned long long columns;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithWidth:(long long)a0 margin:(long long)a1 gutter:(long long)a2 columns:(unsigned long long)a3;

@end
