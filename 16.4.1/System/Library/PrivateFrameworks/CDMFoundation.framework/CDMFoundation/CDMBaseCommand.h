@class NSString, NSError;

@interface CDMBaseCommand : NSObject <CDMCommand>

@property (readonly, nonatomic) NSString *uuid;
@property (readonly, nonatomic) NSString *commandName;
@property (retain, nonatomic) NSError *cmdError;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)commandName;

@end
