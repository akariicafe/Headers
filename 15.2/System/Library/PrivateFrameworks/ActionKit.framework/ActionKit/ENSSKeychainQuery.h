@class NSString, NSData;
@protocol NSCoding;

@interface ENSSKeychainQuery : NSObject

@property (copy, nonatomic) NSString *account;
@property (copy, nonatomic) NSString *service;
@property (copy, nonatomic) NSString *label;
@property (copy, nonatomic) NSString *accessGroup;
@property (nonatomic) unsigned long long synchronizationMode;
@property (copy, nonatomic) NSData *passwordData;
@property (copy, nonatomic) id<NSCoding> passwordObject;
@property (copy, nonatomic) NSString *password;

+ (id)errorWithCode:(int)a0;
+ (BOOL)isSynchronizationAvailable;

- (BOOL)fetch:(id *)a0;
- (BOOL)save:(id *)a0;
- (id)query;
- (void).cxx_destruct;
- (BOOL)deleteItem:(id *)a0;
- (id)fetchAll:(id *)a0;

@end
