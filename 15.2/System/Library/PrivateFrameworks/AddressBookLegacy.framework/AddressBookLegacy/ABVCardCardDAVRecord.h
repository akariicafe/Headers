@interface ABVCardCardDAVRecord : ABVCardRecord

+ (BOOL)includeREVInVCards;
+ (BOOL)includeImageURIInVCards;
+ (BOOL)includeABClipRectInVCardPhotos;
+ (BOOL)includeNotesInVCards;

- (BOOL)useThumbnailImageFormatIfAvailable;

@end
