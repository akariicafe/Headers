@class NSUUID, NSArray, NSDate, TRISubject, TRISubjectProvider;

@interface TRITrackingId : NSObject <NSSecureCoding> {
    TRISubject *_subject;
    TRISubjectProvider *_subjectProvider;
    int _projectId;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSUUID *uuid;
@property (readonly, nonatomic) NSDate *time;
@property (readonly, nonatomic) NSArray *treatments;
@property (readonly, nonatomic) TRISubject *subject;

+ (id)trackingIdWithProjectId:(int)a0 paths:(id)a1;
+ (id)trackingIdWithProjectId:(int)a0 paths:(id)a1 treatments:(id)a2;

- (id)initWithUUID:(id)a0 time:(id)a1 treatments:(id)a2 subject:(id)a3;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithUUID:(id)a0 time:(id)a1 treatments:(id)a2 subjectProvider:(id)a3 projectId:(int)a4;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;

@end
