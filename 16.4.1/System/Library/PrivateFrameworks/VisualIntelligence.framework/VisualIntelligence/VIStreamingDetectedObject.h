@class NSUUID, NSString;

@interface VIStreamingDetectedObject : NSObject

@property (readonly, copy, nonatomic) NSUUID *objectUUID;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } normalizedBoundingBox;
@property (readonly, copy, nonatomic) NSString *domainKey;
@property (readonly, copy, nonatomic) NSString *glyphName;
@property (readonly, copy, nonatomic) NSString *displayLabel;

- (void).cxx_destruct;
- (id)initWithObjectUUID:(id)a0 normalizedBoundingBox:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 domainKey:(id)a2 glyphName:(id)a3 displayLabel:(id)a4;

@end
