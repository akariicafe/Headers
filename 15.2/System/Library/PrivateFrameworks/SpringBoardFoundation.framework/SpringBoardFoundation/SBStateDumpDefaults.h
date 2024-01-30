@class NSNumber;

@interface SBStateDumpDefaults : SBAbstractSpringBoardDefaultDomain

@property (nonatomic, getter=isRemoteDumpEnabled) BOOL remoteDumpEnabled;
@property (retain, nonatomic) NSNumber *remoteDumpTimeout;

@end
