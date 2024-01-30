@class NFApplet, NSData;

@interface NFAppletExtraInfo : NSObject

@property (readonly, weak, nonatomic) NFApplet *applet;
@property (readonly, nonatomic) NSData *ssdAID;
@property (readonly, nonatomic) NSData *obgk;

+ (id)infoWithDictionary:(id)a0 applet:(id)a1;

- (id)debugDescription;
- (void).cxx_destruct;

@end
