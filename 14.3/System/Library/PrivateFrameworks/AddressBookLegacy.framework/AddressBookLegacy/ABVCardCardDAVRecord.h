@interface ABVCardCardDAVRecord : ABVCardRecord

+ (BOOL)includeNotesInVCards;
+ (BOOL)includeREVInVCards;
+ (BOOL)includeImageURIInVCards;
+ (BOOL)includeABClipRectInVCardPhotos;

- (BOOL)useThumbnailImageFormatIfAvailable;

@end
