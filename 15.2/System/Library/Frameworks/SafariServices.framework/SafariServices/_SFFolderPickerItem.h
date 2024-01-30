@class NSString, WebBookmark;

@interface _SFFolderPickerItem : NSObject

@property (readonly, nonatomic) WebBookmark *bookmark;
@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) unsigned long long depth;

- (void).cxx_destruct;
- (id)_initWithBookmark:(id)a0 depth:(unsigned long long)a1;

@end
