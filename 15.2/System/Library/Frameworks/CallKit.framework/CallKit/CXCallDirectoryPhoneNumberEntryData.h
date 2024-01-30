@class NSData, NSString;

@interface CXCallDirectoryPhoneNumberEntryData : NSObject <CXCallDirectoryEntryData, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSData *phoneNumberData;
@property (readonly, nonatomic) const long long *phoneNumbers;
@property (readonly, nonatomic) unsigned long long count;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;
- (long long)phoneNumberAtIndex:(unsigned long long)a0;

@end
