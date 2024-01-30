@interface ABVCardCardDAVRecord : ABVCardRecord

+ (BOOL)includeNotesInVCards;
+ (BOOL)includeABClipRectInVCardPhotos;
+ (BOOL)includeImageURIInVCards;
+ (BOOL)includeREVInVCards;

- (BOOL)useThumbnailImageFormatIfAvailable;

@end
