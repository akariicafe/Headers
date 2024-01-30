@class NSArray, NSUUID, CPListTemplate, NSString;

@interface CPListImageRowItem : NSObject <CPListItemPrivate, NSSecureCoding, CPSelectableListItem>

@property (class, readonly, nonatomic) struct CGSize { double x0; double x1; } maximumImageSize;
@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSArray *gridImagesSet;
@property (readonly, nonatomic) NSUUID *identifier;
@property (weak, nonatomic) CPListTemplate *listTemplate;
@property (copy, nonatomic) NSString *text;
@property (retain, nonatomic) id userInfo;
@property (copy, nonatomic) id /* block */ handler;
@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (readonly, nonatomic) NSArray *gridImages;
@property (copy, nonatomic) id /* block */ listImageRowHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)encodeWithCoder:(id)a0;
- (void)_setNeedsUpdate;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)updateImages:(id)a0;
- (id)initWithText:(id)a0 images:(id)a1;

@end
