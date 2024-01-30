@class NSString, NSError;

@interface CDMBaseCommand : NSObject <CDMCommand>

@property (readonly, nonatomic) NSString *uuid;
@property (copy, nonatomic) NSString *aceRefId;
@property (readonly, nonatomic) NSString *commandName;
@property (retain, nonatomic) NSError *cmdError;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)init;

@end
