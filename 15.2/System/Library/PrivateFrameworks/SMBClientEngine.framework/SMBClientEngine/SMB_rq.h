@class SMBPiston, NSData;

@interface SMB_rq : NSObject {
    struct { struct smb_rq *tqe_next; struct smb_rq **tqe_prev; } sr_link;
    struct mbchain { struct piston_mbuf *mb_top; struct piston_mbuf *mb_cur; unsigned long long mb_mleft; unsigned long long mb_count; unsigned long long mb_len; } sr_rq;
    struct mdchain { struct piston_mbuf *md_top; struct piston_mbuf *md_cur; char *md_pos; unsigned long long md_len; } sr_rp;
}

@property (retain) SMBPiston *sr_pd;
@property unsigned short sr_command;
@property unsigned int sr_extflags;
@property unsigned short sr_creditcharge;
@property unsigned short sr_creditsrequested;
@property unsigned int sr_rqflags;
@property unsigned int sr_nextcmd;
@property unsigned long long sr_messageid;
@property unsigned long long *sr_messageidp;
@property unsigned int sr_rqtreeid;
@property unsigned long long sr_rqsessionid;
@property unsigned short *sr_bcount;
@property unsigned int *sr_lcount;
@property unsigned short *sr_creditchargep;
@property unsigned short *sr_creditreqp;
@property unsigned int *sr_flagsp;
@property unsigned int *sr_nextcmdp;
@property unsigned int sr_flags;
@property char *sr_rqsigp;
@property unsigned int sr_timeout;
@property struct timespec { long long tv_sec; long long tv_nsec; } sr_credit_timesent;
@property struct timespec { long long tv_sec; long long tv_nsec; } sr_timesent;
@property unsigned short sr_rspcreditsgranted;
@property unsigned int sr_rspflags;
@property unsigned int sr_rspnextcmd;
@property unsigned int sr_rsppid;
@property unsigned int sr_rsptreeid;
@property unsigned long long sr_rspasyncid;
@property unsigned long long sr_rspsessionid;
@property int replyError;
@property struct smb_session { struct _opaque_pthread_mutex_t { long long x0; char x1[56]; } x0; unsigned int x1; unsigned short x2; unsigned short x3; unsigned short x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned char x9[16]; unsigned short x10; unsigned int x11; struct gss_ctx_id_t_desc_struct *x12; struct gss_cred_id_t_desc_struct *x13; struct gss_buffer_desc_struct { unsigned long long x0; void *x1; } x14; struct gss_buffer_desc_struct { unsigned long long x0; void *x1; } x15; unsigned int x16; unsigned int x17; unsigned char x18[16]; unsigned short x19; unsigned short x20; unsigned short x21[8]; char *x22; unsigned int x23; char *x24; unsigned int x25; unsigned char x26[16]; unsigned int x27; unsigned char x28[16]; unsigned int x29; unsigned long long x30; unsigned long long x31; unsigned long long x32; unsigned long long x33; unsigned long long x34; unsigned long long x35; unsigned long long x36; unsigned long long x37; char *x38; struct _opaque_pthread_mutex_t { long long x0; char x1[56]; } x39; _Atomic unsigned long long x40; _Atomic unsigned int x41; _Atomic unsigned int x42; _Atomic unsigned int x43; _Atomic int x44; struct _opaque_pthread_cond_t { long long x0; char x1[40]; } x45; unsigned int x46; unsigned long long x47; } *sr_sessionp;
@property unsigned int sr_ntstatus;
@property (retain) SMB_rq *sr_next_rqp;
@property (copy) id /* block */ sr_callback;
@property unsigned int onEncryptedShare;
@property (retain) NSData *writeData;
@property unsigned int writeLen;

- (void).cxx_destruct;
- (void)dealloc;
- (void)smb_rq_done;
- (struct mbchain { struct piston_mbuf *x0; struct piston_mbuf *x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; } *)smb_rq_getrequest;
- (void)smb_rq_set_extflag:(unsigned int)a0;
- (void)smb_rq_set_srflags:(unsigned int)a0;
- (struct mdchain { struct piston_mbuf *x0; struct piston_mbuf *x1; char *x2; unsigned long long x3; } *)smb_rq_getreply;
- (void)smb_rq_set_sr_nextcmdp:(unsigned long long)a0;
- (void)smb_rq_set_srflagsp:(unsigned int)a0;
- (void)smb_rq_callback:(int)a0;

@end
