@class UIImage, NSString, SUScriptCanvasContext;

@interface SUScriptSegmentedControlItem : SUScriptObject {
    SUScriptCanvasContext *_canvas;
    NSString *_identifier;
    NSString *_imageURLString;
    NSString *_title;
    id _userInfo;
}

@property (readonly, nonatomic) UIImage *image;
@property (retain) SUScriptCanvasContext *canvas;
@property (retain) NSString *identifier;
@property (retain) NSString *imageURL;
@property (retain) NSString *title;
@property (retain) id userInfo;

+ (void)initialize;
+ (id)webScriptNameForKeyName:(id)a0;

- (void)_setImage:(id)a0;
- (void)dealloc;
- (id)_className;
- (id)_segmentedControl;
- (id)attributeKeys;
- (id)scriptAttributeKeys;
- (void)_reloadUserInterface;
- (id)initWithPageSection:(id)a0;
- (id)newPageSection;

@end
