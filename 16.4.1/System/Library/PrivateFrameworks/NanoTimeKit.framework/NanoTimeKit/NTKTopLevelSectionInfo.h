@class NSString;

@interface NTKTopLevelSectionInfo : NSObject <NTKComplicationSectionInfo, NSCopying>

@property (copy, nonatomic) NSString *ntk_identifier;
@property (copy, nonatomic) NSString *ntk_localizedSectionName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 localizedSectionName:(id)a1;

@end
