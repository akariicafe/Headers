@class NSString;

@interface WBSTouchIconRequest : WBSSiteMetadataRequest <WBSIconRequest>

@property (readonly, nonatomic, getter=isIconGenerationEnabled) BOOL iconGenerationEnabled;
@property (readonly, nonatomic, getter=isIconDownloadingEnabled) BOOL iconDownloadingEnabled;
@property (readonly, nonatomic) struct CGSize { double width; double height; } minimumIconSize;
@property (readonly, nonatomic) struct CGSize { double width; double height; } maximumIconSize;
@property (readonly, copy, nonatomic) NSString *monogramTitle;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } sizeForDrawing;
@property (readonly, copy, nonatomic) NSString *uniqueIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)requestWithTitle:(id)a0 url:(id)a1 minimumIconSize:(struct CGSize { double x0; double x1; })a2 maximumIconSize:(struct CGSize { double x0; double x1; })a3 iconGenerationEnabled:(BOOL)a4 iconDownloadingEnabled:(BOOL)a5;
+ (id)requestWithTitle:(id)a0 url:(id)a1 minimumIconSize:(struct CGSize { double x0; double x1; })a2 maximumIconSize:(struct CGSize { double x0; double x1; })a3 iconGenerationEnabled:(BOOL)a4;
+ (id)requestWithTitle:(id)a0 url:(id)a1 minimumIconSize:(struct CGSize { double x0; double x1; })a2 maximumIconSize:(struct CGSize { double x0; double x1; })a3;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithTitle:(id)a0 url:(id)a1 minimumIconSize:(struct CGSize { double x0; double x1; })a2 maximumIconSize:(struct CGSize { double x0; double x1; })a3 iconGenerationEnabled:(BOOL)a4;
- (id)initWithTitle:(id)a0 url:(id)a1 minimumIconSize:(struct CGSize { double x0; double x1; })a2 maximumIconSize:(struct CGSize { double x0; double x1; })a3;
- (id)initWithTitle:(id)a0 url:(id)a1 minimumIconSize:(struct CGSize { double x0; double x1; })a2 maximumIconSize:(struct CGSize { double x0; double x1; })a3 iconGenerationEnabled:(BOOL)a4 iconDownloadingEnabled:(BOOL)a5;

@end
