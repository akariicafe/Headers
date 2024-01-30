@interface WXDocument : NSObject

+ (void)readFontTable:(id)a0 to:(id)a1 state:(id)a2;
+ (void)readStyles:(id)a0 to:(id)a1 state:(id)a2;
+ (void)readLists:(id)a0 to:(id)a1 state:(id)a2;
+ (void)readSources:(id)a0 to:(id)a1 state:(id)a2;
+ (void)readDocumentSettings:(id)a0 to:(id)a1 state:(id)a2;
+ (void)readDocument:(id)a0 to:(id)a1 state:(id)a2;
+ (id)noteRestartEnumMap;
+ (id)notePositionEnumMap;
+ (id)documentFrom:(id)a0 reader:(id)a1 cancel:(id)a2 asThumbnail:(BOOL)a3;

@end
