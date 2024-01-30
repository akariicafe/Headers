@class NSString;

@interface NTKGreenfieldComplicationSharingOption : NSObject

@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSString *uniqueIdentifier;
@property (readonly, nonatomic) unsigned long long optionType;

+ (id)optionWithName:(id)a0 uniqueIdentifier:(id)a1 optionType:(unsigned long long)a2;

- (void).cxx_destruct;

@end
