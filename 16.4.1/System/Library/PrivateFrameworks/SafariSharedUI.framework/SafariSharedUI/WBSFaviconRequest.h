@class NSString;

@interface WBSFaviconRequest : WBSSiteMetadataRequest <WBSIconRequest>

@property (readonly, nonatomic) unsigned long long type;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } iconSize;
@property (readonly, nonatomic) unsigned long long fallbackType;
@property (readonly, nonatomic) BOOL isURLTypedByUser;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } sizeForDrawing;
@property (readonly, copy, nonatomic) NSString *uniqueIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)_initWithURL:(id)a0 type:(unsigned long long)a1 iconSize:(struct CGSize { double x0; double x1; })a2 fallbackType:(unsigned long long)a3 isURLTypedByUser:(BOOL)a4;
- (id)initWithDomain:(id)a0 iconSize:(struct CGSize { double x0; double x1; })a1 fallbackType:(unsigned long long)a2;
- (id)initWithURL:(id)a0 extraInfo:(id)a1;
- (id)initWithURL:(id)a0 iconSize:(struct CGSize { double x0; double x1; })a1 fallbackType:(unsigned long long)a2;
- (id)initWithURL:(id)a0 iconSize:(struct CGSize { double x0; double x1; })a1 fallbackType:(unsigned long long)a2 isURLTypedByUser:(BOOL)a3;

@end
