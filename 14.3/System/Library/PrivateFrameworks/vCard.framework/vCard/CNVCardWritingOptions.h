@class NSArray;

@interface CNVCardWritingOptions : NSObject

@property BOOL includePrivateFields;
@property BOOL includePrivateBundleIdentifiers;
@property BOOL includeNotes;
@property BOOL includeUserSettings;
@property BOOL includePhotos;
@property BOOL compressPhotos;
@property BOOL prefersUncroppedPhotos;
@property BOOL usePhotoReferencesIfAvailable;
@property struct CGSize { double width; double height; } maximumImageSize;
@property unsigned long long maximumEncodingLength;
@property unsigned long long maximumImageEncodingLength;
@property (copy) NSArray *treatAsUnknownProperties;
@property unsigned long long outputVersion;
@property (copy) NSArray *availableEncodings;

+ (id)optionsFromPreferences;

- (id)init;
- (void).cxx_destruct;
- (id)description;

@end
