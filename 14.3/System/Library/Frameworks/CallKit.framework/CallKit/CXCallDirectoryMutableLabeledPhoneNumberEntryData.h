@class NSMutableData, NSMutableDictionary;

@interface CXCallDirectoryMutableLabeledPhoneNumberEntryData : CXCallDirectoryLabeledPhoneNumberEntryData <NSCopying>

@property (retain, nonatomic) NSMutableData *mutablePhoneNumberData;
@property (retain, nonatomic) NSMutableData *mutableLabelData;
@property (retain, nonatomic) NSMutableDictionary *labelToLabelDataOffset;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCapacity:(unsigned long long)a0;
- (BOOL)appendPhoneNumber:(long long)a0 label:(id)a1;

@end
