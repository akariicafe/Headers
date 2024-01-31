@class NSMutableData;

@interface CXCallDirectoryMutablePhoneNumberEntryData : CXCallDirectoryPhoneNumberEntryData <NSCopying>

@property (retain, nonatomic) NSMutableData *mutablePhoneNumberData;

- (id)init;
- (id)initWithCapacity:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)appendPhoneNumber:(long long)a0;

@end
