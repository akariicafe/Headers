@class MPMediaPlaylist;

@interface SUScriptMediaPlaylist : SUScriptMediaItemCollection

@property (readonly, nonatomic) MPMediaPlaylist *nativePlaylist;

+ (void)initialize;
+ (id)webScriptNameForSelector:(SEL)a0;
+ (unsigned long long)nativePlaylistAttributesForScriptPlaylistAttributes:(id)a0;
+ (id)scriptPlaylistAttributesForNativePlaylistAttributes:(unsigned long long)a0;

- (id)valueForProperty:(id)a0;
- (id)_className;

@end
