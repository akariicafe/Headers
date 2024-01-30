@interface WXDocument : NSObject

+ (id)documentFrom:(id)a0 reader:(id)a1 cancel:(id)a2 asThumbnail:(BOOL)a3;
+ (id)notePositionEnumMap;
+ (id)noteRestartEnumMap;
+ (void)readDocument:(id)a0 to:(id)a1 state:(id)a2;
+ (void)readDocumentSettings:(id)a0 to:(id)a1 state:(id)a2;
+ (void)readFontTable:(id)a0 to:(id)a1 state:(id)a2;
+ (void)readLists:(id)a0 to:(id)a1 state:(id)a2;
+ (void)readSources:(id)a0 to:(id)a1 state:(id)a2;
+ (void)readStyles:(id)a0 to:(id)a1 state:(id)a2;

@end
