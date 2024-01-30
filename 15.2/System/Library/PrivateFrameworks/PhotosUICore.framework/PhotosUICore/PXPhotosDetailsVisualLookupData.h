@class NSString;

@interface PXPhotosDetailsVisualLookupData : NSObject

@property (copy, nonatomic) NSString *displayMessage;
@property (copy, nonatomic) NSString *glyphImageName;
@property (copy, nonatomic) NSString *visualDomain;

- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (unsigned long long)hash;
- (id)initWithGlyphName:(id)a0 visualDomain:(id)a1 displayMessage:(id)a2;
- (BOOL)_isEqualToVisualLookupData:(id)a0;

@end
