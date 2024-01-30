@class NSArray, NSString;

@interface SSVDialogResponse : NSObject <NSCopying, SSXPCCoding>

@property (nonatomic) long long selectedButtonIndex;
@property (copy, nonatomic) NSArray *textFieldValues;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
